static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = new int[10];
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
        delete [] data;
    }
}
void FUN1()
{
    int * data;
    data = new int[10];
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
        delete [] data;
    }
}
void FUN2()
{
    int * data;
    data = new int[10];
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
        delete [] data;
    }
}
void FUN3()
{
    int * data;
    data = new int[10];
    if(STATIC_CONST_TRUE)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
        delete [] data;
    }
}
} 
