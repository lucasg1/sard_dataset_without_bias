namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    int VAR1[50];
    int VAR2[100];
    data = VAR1;
    {
        int * data = dataRef;
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
}
void FUN1()
{
    int * data;
    int * &dataRef = data;
    int VAR1[50];
    int VAR2[100];
    data = VAR2;
    {
        int * data = dataRef;
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
}
} 
using namespace NAMESPACE0; 
int FUN2(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    printLine("Calling FUN2()...");
    FUN2();
    printLine("Finished FUN2()");
    printLine("Calling FUN0()...");
    FUN0();
    printLine("Finished FUN0()");
    return 0;
}
