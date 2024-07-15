namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = NULL;
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
