static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            twoIntsStruct data;
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
            data.intOne = 1;
            data.intTwo = 2;
            *pointer = data; 
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
        }
    }
}
void FUN1()
{
    if(staticFive==5)
    {
        {
            twoIntsStruct data;
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
            data.intOne = 1;
            data.intTwo = 2;
            *pointer = data; 
            {
                twoIntsStruct data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
        }
    }
}
