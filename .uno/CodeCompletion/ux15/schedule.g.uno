[Uno.Compiler.UxGenerated]
public partial class schedule: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    static schedule()
    {
    }
    [global::Uno.UX.UXConstructor]
    public schedule(
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
        this.SourceFileName = "Pages/schedule.ux";
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "Pages/schedule.ux";
        temp.Children.Add(temp1);
        temp1.Margin = float4(0f, 0f, 0f, 70f);
        temp1.SourceLineNumber = 5;
        temp1.SourceFileName = "Pages/schedule.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/cal.png"));
        this.Children.Add(temp);
    }
}
