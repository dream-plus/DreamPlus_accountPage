[Uno.Compiler.UxGenerated]
public partial class expense: Fuse.Controls.Page
{
    static expense()
    {
    }
    [global::Uno.UX.UXConstructor]
    public expense()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "account/expense.ux";
        temp.Value = "expense";
        temp.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "account/expense.ux";
        this.Children.Add(temp);
    }
}
