namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct data;
    twoIntsStruct &dataRef = data;
    ; 
    {
        twoIntsStruct data = dataRef;
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}
} 
