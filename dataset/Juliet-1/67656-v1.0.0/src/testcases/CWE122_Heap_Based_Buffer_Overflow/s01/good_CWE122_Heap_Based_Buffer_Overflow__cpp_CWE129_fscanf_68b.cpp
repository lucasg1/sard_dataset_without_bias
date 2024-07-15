namespace NAMESPACE0
{
int VAR1;
int VAR2;
int VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    int data;
    data = -1;
    data = 7;
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0()
{
    int data = VAR2;
    {
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0)
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}
void FUN1()
{
    int data = VAR3;
    {
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0 && data < (10))
        {
            buffer[data] = 1;
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
        delete[] buffer;
    }
}
} 
