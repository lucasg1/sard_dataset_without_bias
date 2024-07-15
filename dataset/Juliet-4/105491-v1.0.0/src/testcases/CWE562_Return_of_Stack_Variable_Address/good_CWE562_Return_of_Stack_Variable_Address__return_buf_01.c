static char *FUN0()
{
    static char charString[] = "FUN0 string";
    return charString;
}
void FUN1() 
{
    printLine(FUN0());
}
void FUN2() 
{
    FUN1();
}
