require 'ray'

# Ray has a more advanced sprite class, of course!
class CustomSprite < Ray::Drawable
  def initialize(image)
    super() # very important: creating the actual drawable

    # Ray allocates a VBO to store your vertices.
    # You could just use your own OpenGL binding to call glBegin and glEnd
    # if you don't want to use it.
    self.vertex_count = 4

    # Tells Ray to enable texturing for this drawable
    self.textured = true

    @image = image
  end

  # return an array of vertices
  def fill_vertices
    rect = @img.tex_rect [0, 0, @img.w, @img.h]

    [
     Ray::Vertex.new([0,      0],      Ray::Color.white, rect.top_left),
     Ray::Vertex.new([@img.w, 0],      Ray::Color.white, rect.top_right),
     Ray::Vertex.new([0,      @img.h], Ray::Color.white, rect.bottom_left),
     Ray::Vertex.new([@img.w, @img.h], Ray::Color.white, rect.bottom_right),
    ]
  end

  # The index parameter is there in case you'd want to use
  # draw_elements. You can fill indices by defining a fill_indices method
  # and setting index_count.
  def render(first, index)
    @image.bind

    # Some low level OpenGL calls are available
    Ray::GL.draw_arrays :triangle_strip, first, 4
  end
end
