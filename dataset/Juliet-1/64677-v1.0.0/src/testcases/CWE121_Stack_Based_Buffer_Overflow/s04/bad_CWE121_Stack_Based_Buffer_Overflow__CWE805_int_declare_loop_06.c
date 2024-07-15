static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(STATIC_CONST_FIVE==5)
    {
        data = VAR0;
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
        }
    }
}
void FUN1()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
void FUN2()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(STATIC_CONST_FIVE==5)
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
int FUN3(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    printLine("Calling good()...");
    FUN3();
    printLine("Finished good()");
    printLine("Calling bad()...");
    FUN0();
    printLine("Finished bad()");
    return 0;
}
