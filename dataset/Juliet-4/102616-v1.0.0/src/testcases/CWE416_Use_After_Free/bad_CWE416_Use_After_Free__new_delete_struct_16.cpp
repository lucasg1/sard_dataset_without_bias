namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
        break;
    }
    while(1)
    {
<START>
        printStructLine(data);
<END>
        break;
    }
}
} 
