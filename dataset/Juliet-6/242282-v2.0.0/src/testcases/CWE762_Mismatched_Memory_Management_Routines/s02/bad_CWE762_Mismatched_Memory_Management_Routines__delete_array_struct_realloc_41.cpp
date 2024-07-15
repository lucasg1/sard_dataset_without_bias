namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
} 
