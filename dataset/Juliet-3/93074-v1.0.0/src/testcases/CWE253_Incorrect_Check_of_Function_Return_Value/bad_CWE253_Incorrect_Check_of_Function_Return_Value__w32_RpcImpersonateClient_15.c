void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
        {
            exit(1);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
