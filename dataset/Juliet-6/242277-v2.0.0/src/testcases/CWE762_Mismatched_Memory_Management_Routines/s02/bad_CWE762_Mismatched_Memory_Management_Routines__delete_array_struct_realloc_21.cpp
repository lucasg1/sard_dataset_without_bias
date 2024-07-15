namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    VAR1 = 1; 
    FUN0(data);
}
} 
