namespace NAMESPACE0
{
void FUN0()
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
