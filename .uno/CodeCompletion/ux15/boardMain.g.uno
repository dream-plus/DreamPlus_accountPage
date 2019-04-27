[Uno.Compiler.UxGenerated]
public partial class boardMain: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static boardMain()
    {
    }
    [global::Uno.UX.UXConstructor]
    public boardMain(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new global::Fuse.Controls.Panel();
        var temp2 = new global::boardTopbar();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/boardMain.ux";
        temp.LineNumber = 3;
        temp.FileName = "Pages/boardMain.ux";
        temp.SourceLineNumber = 3;
        temp.SourceFileName = "Pages/boardMain.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/boardMain.js"));
        temp1.SourceLineNumber = 5;
        temp1.SourceFileName = "Pages/boardMain.ux";
        temp1.Children.Add(temp2);
        temp2.SourceLineNumber = 6;
        temp2.SourceFileName = "Pages/boardMain.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
