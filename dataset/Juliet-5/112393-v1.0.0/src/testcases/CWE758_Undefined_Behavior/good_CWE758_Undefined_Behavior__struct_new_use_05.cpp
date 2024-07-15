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
            twoIntsStruct data;
            data.intOne = 1;
            data.intTwo = 2;
            twoIntsStruct * pointer = new twoIntsStruct;
            *pointer = data; 
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
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
            twoIntsStruct data;
            data.intOne = 1;
            data.intTwo = 2;
            twoIntsStruct * pointer = new twoIntsStruct;
            *pointer = data; 
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
            delete pointer;
        }
    }
}
} 
