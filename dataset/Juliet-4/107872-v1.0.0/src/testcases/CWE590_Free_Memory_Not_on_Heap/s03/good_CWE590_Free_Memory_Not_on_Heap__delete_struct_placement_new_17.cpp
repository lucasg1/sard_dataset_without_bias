namespace NAMESPACE0
{
void FUN0()
{
    int h;
    twoIntsStruct * data;
    data = NULL; 
    for(h = 0; h < 1; h++)
    {
        {
            twoIntsStruct * dataBuffer = new twoIntsStruct;
            dataBuffer->intOne = 1;
            dataBuffer->intTwo = 1;
            data = dataBuffer;
        }
    }
    printStructLine(data);
    delete data;
}
} 
