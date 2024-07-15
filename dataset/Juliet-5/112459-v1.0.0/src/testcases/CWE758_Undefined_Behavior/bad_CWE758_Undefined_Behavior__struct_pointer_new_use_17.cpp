namespace NAMESPACE0
{
void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            twoIntsStruct * * pointer = new twoIntsStruct *;
<START>
            twoIntsStruct * data = *pointer; 
<END>
            delete pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}
} 
