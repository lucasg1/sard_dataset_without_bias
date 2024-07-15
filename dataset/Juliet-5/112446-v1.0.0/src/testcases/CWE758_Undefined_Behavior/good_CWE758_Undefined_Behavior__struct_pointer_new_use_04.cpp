static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            twoIntsStruct * data;
            data = new twoIntsStruct;
            data->intOne = 5;
            data->intTwo = 6;
            twoIntsStruct * * pointer = new twoIntsStruct *;
            *pointer = data; 
            {
                twoIntsStruct * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        {
            twoIntsStruct * data;
            data = new twoIntsStruct;
            data->intOne = 5;
            data->intTwo = 6;
            twoIntsStruct * * pointer = new twoIntsStruct *;
            *pointer = data; 
            {
                twoIntsStruct * data = *pointer;
                printIntLine(data->intOne);
                printIntLine(data->intTwo);
            }
            delete pointer;
        }
    }
}
} 
