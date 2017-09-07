set (PROJECT_NAME example)
PROJECT(${PROJECT_NAME})

CMAKE_MINIMUM_REQUIRED(VERSION 2.7)

file(GLOB HDRS "../abstractpb_types*.h" "apb/*.h")
file(GLOB SRCS "main.cc" "generatedcpp/*.cc" "apb/*.cc")

include_directories(.. tools/protobuf-release/src generatedcpp)

ADD_EXECUTABLE(${PROJECT_NAME} ${SRCS} ${HDRS})

if (MSVC)
  set(CMAKE_CXX_FLAGS_DEBUG "/MTd /D_DEBUG /Zi /Ob0 /Od")
  set(CMAKE_CXX_FLAGS_RELEASE "/MT /Zi /O1 /Ob1")

  TARGET_LINK_LIBRARIES(${PROJECT_NAME}
      debug     ${CMAKE_SOURCE_DIR}/tools/protobuf-release/dest/lib/libprotobufd.lib
      optimized ${CMAKE_SOURCE_DIR}/tools/protobuf-release/dest/lib/libprotobuf.lib )
else()

  TARGET_LINK_LIBRARIES(${PROJECT_NAME} tools/protobuf-release/dest/lib/libprotobuf.a)

endif(MSVC)



