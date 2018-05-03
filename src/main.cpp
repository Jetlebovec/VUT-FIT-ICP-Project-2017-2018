#include "gui/blockeditor.h"
#include <QApplication>

#include "core/types/types.h"
#include "core/graph.h"
#include "core/blocks.h"
#include "core/blockfactory.h"

#include "gui/graph_ui.h"
#include "gui/block_ui.h"

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	BLOCKEDITOR win;

	GraphUI schema;

	win.setCentralWidget(&schema);
	win.show();

	schema.SetName("schema");
	schema.addBlock(VECTOR_INPUT);
	schema.addBlock(VECTOR_OUTPUT);

	BlockUI<BlockBase> *a = static_cast<BlockUI<BlockBase>*>(schema.blocks.front());
	BlockUI<BlockBase> *b = static_cast<BlockUI<BlockBase>*>(schema.blocks.back());
	b->Move(300,300);
	a->Move(100,100);

	//a->Input(0).Value() = vec2(0, 1);
	//a->Input(1).Value() = vec2(1, 0);
	//a->Compute();

	//b->Input(1).Value() = vec2(1, 1);

	//b->Compute();

	//std::string out = b->Output(0).Value();

	return app.exec();
}
