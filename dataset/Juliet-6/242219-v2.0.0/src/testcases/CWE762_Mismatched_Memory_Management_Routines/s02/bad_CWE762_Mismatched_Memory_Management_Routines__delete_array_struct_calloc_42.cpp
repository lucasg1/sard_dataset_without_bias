namespace NAMESPACE0
{
static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
