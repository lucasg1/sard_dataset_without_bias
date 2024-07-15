namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = NULL;
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
<START>
        delete [] data;
<END>
    }
}
} 
