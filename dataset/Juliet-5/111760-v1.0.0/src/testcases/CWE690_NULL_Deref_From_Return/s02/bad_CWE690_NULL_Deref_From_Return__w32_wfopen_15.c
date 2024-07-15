void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    switch(6)
    {
    case 6:
<START>
        fclose(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
