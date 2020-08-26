$filename=$args[0]
cls
rm .\a.exe
$compileTime = Measure-Command { g++ $filename }
write-host "Compiled $filename in" $compileTime.Milliseconds "ms"
$executeTime = Measure-Command { .\a  }
write-host "Executed in" $executeTime.Milliseconds "ms"
write-host 
.\a