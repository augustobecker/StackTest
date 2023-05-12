# Use case

This use case is ideal to initialize C projects at 42school, being able to provide options to install some tools and necessary libraries depending on the project.

It is divided into three main use cases:

* A C Normal Project (default): 
    Includes Libft, get_next_line, ft_printf as well as any other project in C, It just creates the basics to start a project.
* A C project with Libft Permitted: 
    Includes so_long, fract-ol, Fdf, pipex, push_swap, as well as projects that explicitly allow the use of Libft.
* A C Graphical Project with Libft Permitted: 
    Includes so_long, fract-ol, Fdf, cub3D, miniRT, as well as projects that use MiniLibx Graphics Library.

## Stack CLI Configuration

To import/update the 42 C Project Stack, execute the command below:

```
stk import stack https://github.com/Stackspot_for_42sp/42-c-project-stack
```

To create an application and configure the plugins and template, run the following command on your terminal:

```
stk create app < app_name > --stackfile C-basic-project
```
