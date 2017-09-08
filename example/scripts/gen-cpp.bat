
set OUTDIR=generatedcpp

del %OUTDIR%\*.h %OUTDIR%\*.cc
tools\bin\protoc --cpp_out=%OUTDIR% -I messagesV2 messagesV2\*.proto
tools\bin\protoc --cpp_out=%OUTDIR% -I messagesV3 messagesV3\*.proto
