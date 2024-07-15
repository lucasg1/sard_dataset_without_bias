namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3 = 0;
void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = -1;
    data = RAND32();
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int data);
void FUN5()
{
    int data;
    data = -1;
    data = 7;
    VAR3 = 1; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0(int data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
void FUN2(int data)
{
    if(VAR2)
    {
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
void FUN4(int data)
{
    if(VAR3)
    {
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
}
} 
