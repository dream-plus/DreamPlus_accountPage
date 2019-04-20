[Uno.Compiler.UxGenerated]
public partial class board: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    static board()
    {
    }
    [global::Uno.UX.UXConstructor]
    public board(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Panel();
        var temp1 = new global::Fuse.Controls.Image();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/board.ux";
        temp.Margin = float4(0f, 0f, 0f, 70f);
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "Pages/board.ux";
        temp.Children.Add(temp1);
        temp1.SourceLineNumber = 5;
        temp1.SourceFileName = "Pages/board.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/board.png"));
        this.Children.Add(temp);
    }
}
