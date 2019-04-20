[Uno.Compiler.UxGenerated]
public partial class accountBook: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static accountBook()
    {
    }
    [global::Uno.UX.UXConstructor]
    public accountBook(
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
        var temp2 = new global::accountTopbar();
        var temp3 = new global::Fuse.Controls.Panel();
        var temp4 = new global::accountHome();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/accountBook.ux";
        temp.LineNumber = 4;
        temp.FileName = "Pages/accountBook.ux";
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "Pages/accountBook.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/accountBook.js"));
        temp1.SourceLineNumber = 6;
        temp1.SourceFileName = "Pages/accountBook.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp1.Children.Add(temp2);
        temp2.SourceLineNumber = 7;
        temp2.SourceFileName = "Pages/accountBook.ux";
        temp3.SourceLineNumber = 11;
        temp3.SourceFileName = "Pages/accountBook.ux";
        temp3.Children.Add(temp4);
        temp4.SourceLineNumber = 12;
        temp4.SourceFileName = "Pages/accountBook.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp3);
    }
}
