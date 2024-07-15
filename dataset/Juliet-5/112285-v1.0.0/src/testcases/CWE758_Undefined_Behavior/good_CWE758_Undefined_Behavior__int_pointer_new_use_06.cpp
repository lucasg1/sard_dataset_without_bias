static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int * data;
            data = new int;
            *data = 5;
            int * * pointer = new int *;
            *pointer = data; 
            {
                int * data = *pointer;
                printIntLine(*data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int * data;
            data = new int;
            *data = 5;
            int * * pointer = new int *;
            *pointer = data; 
            {
                int * data = *pointer;
                printIntLine(*data);
            }
            delete pointer;
        }
    }
}
} 
