namespace NAMESPACE0
{
void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = 7;
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = -1;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int data);
void FUN0(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN2(int data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int data);
void FUN5(int data)
{
    FUN9(data);
}
void FUN11(int data);
void FUN7(int data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN13(int data);
void FUN9(int data)
{
    FUN13(data);
}
void FUN15(int data);
void FUN11(int data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(int data)
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
void FUN15(int data)
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
