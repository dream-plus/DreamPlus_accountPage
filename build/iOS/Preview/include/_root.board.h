// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/board.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{struct board;}

namespace g{

// public partial sealed class board :2
// {
::g::Fuse::Controls::Panel_type* board_typeof();
void board__ctor_8_fn(board* __this, ::g::Fuse::Navigation::Router* router1);
void board__InitializeUX_fn(board* __this);
void board__New5_fn(::g::Fuse::Navigation::Router* router1, board** __retval);

struct board : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static board* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
