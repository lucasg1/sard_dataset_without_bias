static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
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
