static char *FUN0()
{
    static char charString[] = "FUN0 string";
    char *ptrCharString;
    ptrCharString = &charString[1];
    return ptrCharString;
}
void FUN1() 
{
    printLine(FUN0());
}
void FUN2() 
{
    FUN1();
}
