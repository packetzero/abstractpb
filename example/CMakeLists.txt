CMAKE_MINIMUM_REQUIRED(VERSION 2.7)

set (PROJECT_NAME example)
PROJECT(${PROJECT_NAME})

IF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  file(GLOB HDRS "../abstractpb_types*.h" "apb/osx/*.hpp")
  file(GLOB SRCS "main.mm" "generatedcpp/*.cc" "apb/osx/*.mm")
elseif()

  file(GLOB HDRS "../abstractpb_types*.h" "apb/*.h")
  file(GLOB SRCS "main.cc" "generatedcpp/*.cc" "apb/*.cc")
ENDIF()




include_directories(.. tools/protobuf-release/src generatedcpp)

ADD_EXECUTABLE(${PROJECT_NAME} ${SRCS} ${HDRS})

if (MSVC)
  set(CMAKE_CXX_FLAGS_DEBUG "/MTd /D_DEBUG /Zi /Ob0 /Od")
  set(CMAKE_CXX_FLAGS_RELEASE "/MT /Zi /O1 /Ob1")

  TARGET_LINK_LIBRARIES(${PROJECT_NAME}
      debug     ${CMAKE_SOURCE_DIR}/tools/protobuf-release/dest/lib/libprotobufd.lib
      optimized ${CMAKE_SOURCE_DIR}/tools/protobuf-release/dest/lib/libprotobuf.lib )
else()

  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

  TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/tools/protobuf-release/dest/lib/libprotobuf.a)

endif(MSVC)
