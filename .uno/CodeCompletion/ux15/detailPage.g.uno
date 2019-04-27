[Uno.Compiler.UxGenerated]
public partial class detailPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static detailPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public detailPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/board/detailPage.ux";
        temp.Code = "\n\t\texports.title = this.Parameter.map(function(param) {\n\t\t\treturn param.title;\n\t\t});\n\t";
        temp.LineNumber = 3;
        temp.FileName = "Pages/board/detailPage.ux";
        temp.SourceLineNumber = 3;
        temp.SourceFileName = "Pages/board/detailPage.ux";
        temp1.Value = "detailPage";
        temp1.FontSize = 50f;
        temp1.TextColor = float4(0.2352941f, 0.2745098f, 0.3882353f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Pages/board/detailPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
