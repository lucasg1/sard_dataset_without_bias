namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    {
        FILE * data = dataRef;
<START>
        fclose(data);
<END>
    }
}
} 
