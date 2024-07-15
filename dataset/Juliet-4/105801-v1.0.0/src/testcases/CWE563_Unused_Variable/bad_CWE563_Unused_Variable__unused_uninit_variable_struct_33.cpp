namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct data;
    twoIntsStruct &dataRef = data;
    ; 
    {
        twoIntsStruct data = dataRef;
<START>
<END>
        ; 
    }
}
} 
