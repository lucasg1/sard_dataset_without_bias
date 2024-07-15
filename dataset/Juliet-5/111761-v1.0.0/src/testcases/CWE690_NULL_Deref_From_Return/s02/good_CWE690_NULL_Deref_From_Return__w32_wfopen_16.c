void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    while(1)
    {
        if (data != NULL)
        {
            fclose(data);
        }
        break;
    }
}
