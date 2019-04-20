[Uno.Compiler.UxGenerated]
public partial class schedule: Fuse.Controls.Page
{
    static schedule()
    {
    }
    [global::Uno.UX.UXConstructor]
    public schedule()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "schedule.ux";
        temp.Value = "schedule Page";
        temp.FontSize = 20f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.Y = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp.SourceLineNumber = 4;
        temp.SourceFileName = "schedule.ux";
        this.Children.Add(temp);
    }
}
