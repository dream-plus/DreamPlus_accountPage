[Uno.Compiler.UxGenerated]
public partial class home: Fuse.Controls.Page
{
    static home()
    {
    }
    [global::Uno.UX.UXConstructor]
    public home()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "home.ux";
        temp.Value = "home Page";
        temp.FontSize = 20f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.Y = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "home.ux";
        this.Children.Add(temp);
    }
}
