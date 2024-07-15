void FUN0() 
{
    int intRand1 = rand();
    int intRand2 = rand();
    if(intRand1 != intRand2)
    {
        printLine("Sometimes prints");
    }
}
void FUN1() 
{
    FUN0();
}
