class Cube {
public:
	// Default constructor
	Cube() {

	};
	~Cube() {};

private:
	// z = -1
	Corner p_xm1_y1_zm1;	// Corner piece
	Side p_x0_y1_zm1;		// Side piece
	Corner p_x1_y1_zm1;		// Corner piece

	Side p_xm1_y0_zm1;		// Side piece
	Center p_x0_y0_zm1;		// Center piece	
	Side p_x1_y0_zm1;		// Side piece

	Corner p_xm1_ym1_zm1;	// Corner piece
	Side p_x0_ym1_zm1;		// Side piece
	Corner p_x1_ym1_zm1;	// Corner piece

	// z = 0
	Corner p_xm1_y1_z0;		// Corner piece
	Center p_xm1_y0_z0;		// Center piece
	Corner p_xm1_ym1_z0;	// Corner piece

	Center p_xm1_y0_z0;		// Center piece
	Center p_x1_y0_z0;		// Center piece

	Corner p_xm1_ym1_z0;	// Corner piece
	Center p_x0_ym1_z0;		// Center piece
	Corner p_x1_ym1_z0;		// Corner piece

	// z = 1
	Corner p_xm1_y1_z1;		// Corner piece
	Side p_x0_y1_z1;		// Side piece
	Corner p_x1_y1_z1;		// Corner piece

	Side p_xm1_y0_z1;		// Side piece
	Center p_x0_y0_z1;		// Center piece
	Side p_x1_y0_z1;		// Side piece

	Corner p_xm1_ym1_z1;	// Corner piece
	Side p_x0_ym1_z1;		// Side piece
	Corner p_x1_ym1_z1;		// Corner piece
};

class Piece {
protected:
	int x;
	int y;
	int z;
};

class Corner : protected Piece {

private:
	char color_x;
	char color_y;
	char color_z;
};

class Center : protected Piece {
	char color;
};

class Side_xy : protected Piece {

};



int main() {

	return 0;
}