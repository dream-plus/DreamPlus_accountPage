[Uno.Compiler.UxGenerated]
public partial class income: Fuse.Controls.Page
{
    static income()
    {
    }
    [global::Uno.UX.UXConstructor]
    public income()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "account/income.ux";
        temp.Value = "income";
        temp.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "account/income.ux";
        this.Children.Add(temp);
    }
}
