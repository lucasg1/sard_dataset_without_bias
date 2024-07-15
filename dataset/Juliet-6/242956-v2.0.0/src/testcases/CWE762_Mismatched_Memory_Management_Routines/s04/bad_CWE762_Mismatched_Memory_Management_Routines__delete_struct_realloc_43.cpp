namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
