#ifndef struct_h
#define struct_h

typedef struct Node_Face{
	float a, b, c, d;
	int id;
	int dy;
	float color[3];
	Node_Face* next;
}Node_Face;

typedef struct Node_C_Eadge{
	double x;
	double dx;
	double e_len;
	int dy;
	int id;
	bool used;
	Node_C_Eadge* next;
}Node_C_Eadge;

typedef struct nodeActivePolygon{
    float a, b, c, d;
	int id;
	int dy;
	float color[3];
	nodeActivePolygon* next;
}nodeActivePolygon;

typedef struct nodeActiveEdgePair{
	double xl;
	double dxl;
	int dyl;
	float xr;
	double dxr;
	int dyr;
	float zl;
	float dzx;
	float dzy;
	int id;
	float* color;
	nodeActiveEdgePair* next;
}nodeActiveEdgePair;

#endif