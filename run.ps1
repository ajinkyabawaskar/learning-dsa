$filename=$args[1]
$compilePref = $args[0]
cls
if($compilePref -eq 0) {
    write-host "Executing"
    .\a    
} else {
    rm .\a.exe
    write-host "Compiling.."
    $compileTime = Measure-Command { g++ $filename }
    write-host "Compiled $filename in" $compileTime.Milliseconds "ms"
    write-host "Executing.."
    .\a
}