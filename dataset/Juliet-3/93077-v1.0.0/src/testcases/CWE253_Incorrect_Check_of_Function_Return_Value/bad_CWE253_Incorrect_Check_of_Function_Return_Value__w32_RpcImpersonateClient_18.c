void FUN0()
{
    goto sink;
sink:
<START>
    if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
    {
        exit(1);
    }
}
