[Uno.Compiler.UxGenerated]
public partial class home: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    static home()
    {
    }
    [global::Uno.UX.UXConstructor]
    public home(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/home.ux";
        temp.Value = "home Page";
        temp.FontSize = 20f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.Y = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp.SourceLineNumber = 6;
        temp.SourceFileName = "Pages/home.ux";
        this.Children.Add(temp);
    }
}
