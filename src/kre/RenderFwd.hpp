/*
	Copyright (C) 2003-2013 by Kristina Simpson <sweet.kristas@gmail.com>

	This software is provided 'as-is', without any express or implied
	warranty. In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	   1. The origin of this software must not be misrepresented; you must not
	   claim that you wrote the original software. If you use this software
	   in a product, an acknowledgement in the product documentation would be
	   appreciated but is not required.

	   2. Altered source versions must be plainly marked as such, and must not be
	   misrepresented as being the original software.

	   3. This notice may not be removed or altered from any source
	   distribution.
*/

#pragma once

#include <memory>
#include <string>

namespace KRE
{
	class Renderable;
	typedef std::shared_ptr<Renderable> RenderablePtr;

	class RenderQueue;
	typedef std::shared_ptr<RenderQueue> RenderQueuePtr;

	class RenderManager;
	typedef std::shared_ptr<RenderManager> RenderManagerPtr;

    class RenderTarget;
    typedef std::shared_ptr<RenderTarget> RenderTargetPtr;
}
