namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
<START>
    delete [] data;
<END>
}
} 
