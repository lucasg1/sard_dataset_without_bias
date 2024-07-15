void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * payload = "calc.exe";
        if(system(payload) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char * payload = "calc.exe";
        if(system(payload) <= 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
